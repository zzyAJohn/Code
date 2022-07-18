package castle;

import java.util.HashMap;

public class Room {
    private String description;
    private HashMap<String, Room> exits = new HashMap<String, Room>();

    public Room(String description) {
        this.description = description;
    }
    
    public void setExits(String dir, Room room) {
        exits.put(dir, room);
    }

    public void setExits(Room west, Room east, Room north, Room south) {
        exits.put("west", west);
        exits.put("east", east);
        exits.put("north", north);
        exits.put("south", south);
    }
        
    @Override
    public String toString()
    {
        return description;
    }

    //获取相邻的房间
    public String getExitDesc() {
        StringBuffer sb = new StringBuffer();//StringBuffer可以不断修改的对象,String对象不能做修改，ret+每次会产生新的对象，系统开销很大
        for(String dir : exits.keySet()) {
            sb.append(dir);
            sb.append(' ');
        }
        return sb.toString();
    }

    public Room getExits(String direction) {
        return exits.get(direction);
    }
}