package com.company;

import static javafx.application.Application.launch;
package signupform;

import java.awt.Label;
import javafx.application.Application;
import static javafx.application.Application.launch;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

        public class Signupform extends Application {



            @Override
            public void start(Stage primaryStage) {

                GridPane signup = new GridPane();
                signup.setAlignment(Pos.CENTER);
                signup.setHgap(15);
                signup.setVgap(15);
                signup.setGridLinesVisible(false);

                Scene scene = new Scene(signup , 500,500);

                Label fnameL=new Label("FirstName");
                signup.add(fnameL, 0, 0);
                TextField fname=new TextField();
                signup.add(fname, 1,0);

                Label lnameL=new Label("LastName");
                signup.add(lnameL, 1, 0);
                TextField lname=new TextField();
                signup.add(lname, 1,1);



                primaryStage.setTitle("Hello World!");
                primaryStage.setScene(scene);
                primaryStage.show();
            }

            /**
             * @param args the command line arguments
             */

package signupform;

import java.awt.Label;
import javafx.application.Application;
import static launch;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

            public class Signupform extends Application {



                @Override
                public void start(Stage primaryStage) {

                    GridPane signup = new GridPane();
                    signup.setAlignment(Pos.CENTER);
                    signup.setHgap(15);
                    signup.setVgap(15);
                    signup.setGridLinesVisible(false);

                    Scene scene = new Scene(signup , 500,500);

                    Label fnameL=new Label("FirstName");
                    signup.add(fnameL, 0, 0);
                    Textfield fname=new Textfield();
                    signup.add(fname, 1,0);

                    Label lnameL=new Label("LastName");
                    signup.add(lnameL, 1, 0);
                    Textfield lname=new Textfield();
                    signup.add(lname, 1,1);



                    primaryStage.setTitle("Hello World!");
                    primaryStage.setScene(scene);
                    primaryStage.show();
                }

                /**
                 * @param args the command line arguments
                 */
                public static void main(String[] args) {
                    launch(args);
                }

            }
            }

        }

    }
}
