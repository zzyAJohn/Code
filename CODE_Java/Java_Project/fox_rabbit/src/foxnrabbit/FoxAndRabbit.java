package foxnrabbit;

import java.awt.BorderLayout;
import java.awt.event.ActionListener;

/*
 * @Author: Weidows
 * @Date: 2020-07-20 18:40:10
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-24 13:23:07
 * @FilePath: \Weidows\Java\src\main\java\twenty\july\my_interface\fox_and_rabbit\FoxAndRabbit.java
 */


import java.util.ArrayList;

import javax.swing.Action;
import javax.swing.JButton;
import javax.swing.JFrame;

import animal.Animal;
import animal.Fox;
import animal.Rabbit;
import cell.Cell;
import field.Field;
import field.Location;
import field.View;


public class FoxAndRabbit {
  private Field theField;
  private View theView;
  private JFrame frame;

  //内部类
  // private class StepListener implements ActionListener {
  //   @Override
  //   public void actionPerformed(ActionEvent e) {
  //   step();
  //   frame.repaint();
  //   }
  // }

  public FoxAndRabbit(int size) {
    theField = new Field(size, size);
    for (int row = 0; row < theField.getHeight(); row++) {
      for (int col = 0; col < theField.getWidth(); col++) {
        double probability = Math.random();
        if (probability < 0.05) {
          theField.place(row, col, new Fox());
        } else if (probability < 0.15) {
          theField.place(row, col, new Rabbit());
        }
      }
    }
    theView = new View(theField);
    frame = new JFrame();
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setResizable(false);
    frame.setTitle("Cells");
    frame.add(theView);
    JButton btnStep = new JButton("单步");
    frame.add(btnStep, BorderLayout.NORTH);
    //匿名类
    btnStep.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        System.out.println("按下啦");
        step();
        frame.repaint();
      }
    });
    frame.pack();
    frame.setVisible(true);
  }

  public void start(int steps) {
    for (int i = 0; i < steps; i++) {
      step();
      theView.repaint();
      try {
        Thread.sleep(200);
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }

  public void step() {
    for (int row = 0; row < theField.getHeight(); row++) {
      for (int col = 0; col < theField.getWidth(); col++) {
        Cell cell = (Cell) theField.get(row, col);
        if (cell != null) {
          Animal animal = (Animal) cell;
          animal.grow();
          if (animal.isAlive()) {
            // *move
            Location loc = animal.move(theField.getFreeNeighbor(row, col));
            if (loc != null)
              theField.move(row, col, loc);
            // *eat
            Cell[] neighbor = (Cell[]) theField.getNeighbor(row, col);
            ArrayList<Animal> listRabbit = new ArrayList<Animal>();
            for (Cell an : neighbor) {
              if (an instanceof Rabbit) {
                listRabbit.add((Rabbit) an);
              }
            }
            if (!listRabbit.isEmpty()) {
              Animal fed = animal.feed(listRabbit);
              if (fed != null)
                theField.remove((Cell) fed);
            }
            // *breed
            Animal baby = animal.breed();
            if (baby != null) {
              theField.placeRandomAdj(row, col, (Cell) baby);
            }
          } else {
            theField.remove(row, col);
          }
        }
      }
    }
  }

  public static void main(String[] args) {
    FoxAndRabbit fnr = new FoxAndRabbit(50);
    // fnr.start(100);
  }
}

