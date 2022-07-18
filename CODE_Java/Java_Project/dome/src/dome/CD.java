package src.dome;

public class CD extends Item {
    private String artist;
    private int numofTracks;

    public CD(String title, int playingTime, boolean gotIt, String comment, String artist, int numofTracks) {
        super(title, playingTime, false, "");
        this.artist = artist;
        this.numofTracks = numofTracks;
    }

    public static void main(String[] args) {

    }

    public void print() {
        super.print();
        System.out.println("CD标题:"+title+" "+"作者:"+artist+"时长"+playingTime+"num"+numofTracks);
    }
}