public class Testaufgabe 
{
    public static void main(String[] args) 
    {
        String test="Teststring_Einstufungstest";
        System.out.println(myMult(21, 4) );
        System.out.println(myMult(2, 3500)); 
        System.out.println(getThird("toss", "a", "coin") );
        System.out.println(getThird("Teststring", "bleibt", test.substring(0,10)));
        System.out.println(getThird("EP1", "EP1", "EP1"));
        System.out.println(replaceNthChar(test, 1, '0'));
        System.out.println(replaceNthChar(test, 3, '#'));
        System.out.println(replaceNthChar(test, 10, '-'));
        System.out.println(replaceNthChar(test, 30, 'X'));
        System.out.println(replaceNthChar("A", 1, '#'));
    }

    static int myMult(int x, int y)
    {
        int ans=0;
        //3*5=5+5+5
        while(x>0)
        {
            ans=ans+y;
            x=x-1;
        }
        return ans;
    }
    static String getThird(String a, String b, String c)
    {
        if(a.equals(b) && a.equals(c) && b.equals(c))
        return "all the same";
        else if(!a.equals(b) && !b.equals(c) && !c.equals(a))
        return "all different";
        else
        {
            if(a.equals(b))
            return c;
            else if(b.equals(c))
            return a;
            else
            return b;
        }
        
    }
    static String replaceNthChar(String text, int n, char replaceChar)
    {
        int n1=n;
        char newstr[]=text.toCharArray();//converts a string to a character array
        while(n<text.length())
        {
            newstr[n]=replaceChar;
            n+=n1;
        }
        return String.valueOf(newstr);//converts a character array to a string
    }
}
