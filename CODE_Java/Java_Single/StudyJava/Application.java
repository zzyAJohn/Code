package StudyJava;

interface Animal {
    void cry();
    String getAnimalName();
}

class Simulator {
    void playSound(Animal animal) {
        animal.cry();
        System.out.println(animal.getAnimalName());
    }
}

class Dog implements Animal {
    public void cry() {
        System.out.println("汪汪");
    }
    public String getAnimalName() {
        return "小狗";
    }
}

class Cat implements Animal {
    public void cry() {
        System.out.println("喵喵");
    }
    public String getAnimalName() {
        return "小猫";
    }
}

public class Application {
    public static void main(String[] args) {
        Simulator sim=new Simulator();
        sim.playSound(new Dog());
        sim.playSound(new Cat());
    }
}
