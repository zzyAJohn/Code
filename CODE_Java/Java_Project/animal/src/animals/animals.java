package animals;

abstract class Animal
{
    abstract void cry();
    abstract String getAnimalName();
}

class dog extends Animal
{
    void cry()
    {
        System.out.println("汪汪");
    }
    String getAnimalName()
    {
        return "我是狗";
    }
}

class cat extends Animal
{
    void cry()
    {
        System.out.println("喵喵");
    }
    String getAnimalName()
    {
        return "我是猫";
    }
}

class Simulator
{
    void playSound(Animal animal)
    {
        animal.cry();
        System.out.println(animal.getAnimalName());
    }
}

public class animals {
    public static void main(String[] args) {
        Animal an=new cat();
        Simulator s=new Simulator();
        s.playSound(an);
        an=new dog();
        s=new Simulator();
        s.playSound(an);
    }
}