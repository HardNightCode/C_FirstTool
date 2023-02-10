#include <iostream>
using namespace std;

int main() {


int option;
cout << endl<<endl<<"Welcome to the network administrator program.\n--------------------------------------------------\n";

cout << "Please select one of the following options:\n";
cout << "1. View all network interfaces.\n";
cout << "2. Open Wireshark packet Analysis Tool.\n";
cout << "3. Use tcpdump packet Capture Tool.\n";
cout << "4. View information about the kernel version and operating system.\n";
cout << "5. Know the username and host name.\n";
cout << "6. Verify connection with Google.\n";
cout << "7. Exit.\n--------------------------------------------------\n";
    
    cout << "Option to select: ";
    cin >> option;

switch (option) {

case 1:{
cout << "Showing network interfaces and IP address...\n";
system("sudo ifconfig -a");
system("hostname -I");
break;}
    
    case 2: {
    cout << "Opening Wireshark...\n";
    system("sudo wireshark");
    break;}

        case 3: {
        cout << "Starting tcpdump...\n";
        cout << "Select a filter to apply to the capture:\n";
        cout << "1. Filter ICMP packets.\n";
        cout << "2. Filter ARP packets.\n";
        cout << "Selected option: ";
        int filter;
        cin >> filter;
            if (filter == 1) {
            system("sudo tcpdump icmp");}
                else if (filter == 2) {
                system("sudo tcpdump arp");}
                    else {
                    cout << "Invalid option.\n";}
        break;}

            case 4: {
            cout << "Showing information about kernel version and operating system...\n";
            system("uname -a && cat /etc/*-release | grep DISTRIB_DESCRIPTION");
            break;}

                case 5: {
                cout << "Showing username and host name...\n";
                cout<<"\nThe username is: ";
                system("echo $USER");
                cout << "\n\n The host name is: ";
                system("hostname");
                break;}

                    case 6: {
                    cout << "Verifying connection with Google...\n";
                    system("ping -c 6 google.com");
                    break;}

                        case 7: {
                        cout<<"";
                        break;}

        default: {
        cout << "Invalid option. Please choose a valid option.\n";
        break;}


}

return 0;
}

