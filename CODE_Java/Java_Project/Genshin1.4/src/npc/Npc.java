package npc;

import java.util.HashMap;

public class Npc {
    private String name;
    private String sex;
    private HashMap<String, Npc> exits = new HashMap<String, Npc>();

    public Npc(String name, String sex) {
        this.name = name;
        this.sex = sex;
    }

    public String getName() {
        return name;
    }

    public String getSex() {
        return sex;
    }

    public void setExits(String dir, Npc npc) {
        exits.put("1", npc);
    }

    public String getSpeak() {
        return "";
    }

    @Override
    public String toString() {
        return name;
    }

    public void getExitDesc() {
        StringBuffer sb = new StringBuffer();
        for(String dir : exits.keySet()) {
            sb.append(dir);
            sb.append(' ');
        }
        return sb.toString();
    }
    
}
