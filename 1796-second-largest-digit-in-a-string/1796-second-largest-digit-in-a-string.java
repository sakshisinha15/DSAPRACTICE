class Solution {
    public int secondHighest(String s) {
        HashSet<Integer> arr=new HashSet<>();
        for(char c:s.toCharArray()){
            if(Character.isDigit(c)){
            arr.add(c-'0');
            }
        }
        int large=Integer.MIN_VALUE;
        int slarge=Integer.MIN_VALUE;
        for (int x:arr){
            if(x>large){
                slarge=large;
                large=x;
            }
            else if(x>slarge&&x!=large){
                slarge=x;
            }
        }
        if(slarge==Integer.MIN_VALUE){
            return -1;
        }
return slarge;
    }
}