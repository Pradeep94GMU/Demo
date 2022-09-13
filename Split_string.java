public class Split_string {
    public static void main(String[] args) {

        String s = "Hello world";
        //System.out.println(s);

        //i will split the string with space term
        String[] res = s.split(" ");
        for(String output : res){
            System.out.println(output);
        }

    }
}
