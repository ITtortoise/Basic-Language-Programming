import javax.swing.*;

public class simple2 extends JFrame{
    JLabel lbl;
    JButton b;
    simple2(){

        lbl=new JLabel("hello");
        b=new JButton("click");
        lbl.setBounds(10,10,50,30);
        b.setBounds(130,100,100,40);
        add(b);
        add(lbl);
        setSize(400,500);
        setTitle("DEMO FORM");
        setLayout(null);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

    }
}
