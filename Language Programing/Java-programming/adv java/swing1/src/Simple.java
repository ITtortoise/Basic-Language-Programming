import javax.swing.*;

public class  Simple
{

    JFrame f;
    JLabel lbl;
    JButton b;
    Simple(){
        f=new JFrame();
        lbl=new JLabel("hello");
        b=new JButton("click");
        lbl.setBounds(10,10,50,30);
        b.setBounds(130,100,100,40);
        f.add(b);
        f.add(lbl);
        f.setSize(400,500);
        f.setTitle("DEMO FORM");
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}
