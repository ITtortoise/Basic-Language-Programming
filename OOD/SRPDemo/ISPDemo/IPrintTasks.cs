using System;
using System.Collections.Generic;
using System.Text;

namespace ISPDemo
{
    public interface IPrintTasks
    {
        bool PrintContent(string content);
        bool ScanContent(string content);      
        bool PhotoCopyContent(string content);
        //bool PrintDuplexContent(string content);//must be implemeted by all the class that are inherite IPrintTasks Interface

    }
    interface IFaxContent
    {
        bool FaxContent(string content);
    }
    interface IPrintDuplexConent
    {
        bool PrintDuplexContent(string content);//must be implemeted by all the class that are inherite IPrintTasks Interface

    }
}
