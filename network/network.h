// generated by Fast Light User Interface Designer (fluid) version 1.0110

#ifndef network_h
#define network_h
#include <FL/Fl.H>
void btnCallback(Fl_Widget*, void* userdata);
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
extern Fl_Input *interfaceInput;
#include <FL/Fl_Group.H>
#include <FL/Fl_Round_Button.H>
extern Fl_Round_Button *dhcpYesBtn;
extern Fl_Round_Button *dhcpNoBtn;
extern Fl_Input *ipAddressInput;
extern Fl_Input *netMaskInput;
extern Fl_Input *broadcastInput;
extern Fl_Input *gatewayInput;
extern Fl_Input *nameserv1Input;
extern Fl_Input *nameserv2Input;
extern Fl_Round_Button *SaveYesBtn;
extern Fl_Round_Button *SaveNoBtn;
#include <FL/Fl_Button.H>
#endif