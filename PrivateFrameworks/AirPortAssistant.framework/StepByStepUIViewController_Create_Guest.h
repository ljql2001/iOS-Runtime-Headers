/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate> {
    int _guestNetSecMode;
    NSString *_wifiName;
    NSString *_wifiPassword;
    bool_guestNetworkEnabled;
}

@property int guestNetSecMode;
@property bool guestNetworkEnabled;
@property(copy) NSString * wifiName;
@property(copy) NSString * wifiPassword;

- (void)addGuestNetworkIsEnabledSection;
- (void)addGuestNetworkPasswordSection;
- (int)guestNetSecMode;
- (bool)guestNetworkEnabled;
- (void)loadView;
- (void)setGuestNetSecMode:(int)arg1;
- (void)setGuestNetworkEnabled:(bool)arg1;
- (void)setWifiName:(id)arg1;
- (void)setWifiPassword:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(bool)arg3;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)updateTable;
- (bool)validateAndSetValues;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(bool)arg1;
- (id)wifiName;
- (id)wifiPassword;

@end