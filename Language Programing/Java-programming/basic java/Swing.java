import javax.swing.*;
class Example extends JFrame {

 JLabel l1,l2,l3;
  JTextField t1,t2,t3;
    JButton b1;

    public Example(){}
    public Example(String S)
    {super(S);}
    public void setComponents() {
         l1=new JLabel("ADDITON OF TWO NUMBERs");
        /*
        l2=new JLabel("FIRST NUMBER");
         l3=new JLabel("SECOND NUMBER");
         t1=new JTextField();
         t2=new JTextField();
         b1=new JButton("ADD");
        */
        setLayout(null);
        setBounds(50,50,200,20);
        add(l1);

    }

    public static void main(String []agrs)
    {
        Example e=new Example("extends JFrame");
        e.setComponents();
        e.setSize(300,300);
        e.setVisible(true);
        e.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }


}

