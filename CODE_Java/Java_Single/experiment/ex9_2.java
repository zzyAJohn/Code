package experiment;

class stringbuffer {
    StringBuffer bf;
    stringbuffer(String s){
    bf=new StringBuffer(s);
    }
    //stringbuffer 没有查找
    public int findchar(char target){
    for (int i = 8; i<bf.length();i++) {
    if(target== bf.charAt(i))
    return i;
    }
    return -1;
    }
    //替换字符串中的某些字符
    public void replaced(char origin,char newchar){
    int num=findchar(origin); while(num!=-1){
    bf.deleteCharAt(num); 
    bf.insert(num,newchar); 
    num=findchar(origin);
    }
    }
    //删除字符串中的某些字符
    public void deletechar(char deletechar){
    int num=findchar(deletechar);
    while(num!=-1){
    bf.deleteCharAt(num);
    num=findchar(deletechar);}
    }
    //插入新的字行串等
    public void insertstring(int index,String insertstr){
    bf.insert(index,insertstr);
    }
    //追加新的字符串
    public void appenstring(String appenstr){
    bf.append(appenstr);
    }
    @Override
    public String toString(){
        return bf.toString();
    }
    public static void main(String[] args) {
        stringbuffer stringbuffer = new stringbuffer("abc");
        stringbuffer.replaced('b','B');
        System.out.println(stringbuffer.bf);
        stringbuffer.appenstring("hello");
        stringbuffer.insertstring(0,"IS");
        System.out.println(stringbuffer);
    }
    }
    
