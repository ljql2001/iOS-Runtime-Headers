/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropReceiverViewController : UIViewController <SFWirelessSettingsControllerDelegate> {
    NSLayoutConstraint * _airDropActiveIconLeftConstraint;
    SFAirDropActiveIconView * _airDropActiveIconView;
    NSLayoutConstraint * _airDropIconLeftConstraint;
    SFAirDropIconView * _airDropIconView;
    NSLayoutConstraint * _airDropInactiveIconLeftConstraint;
    SFAirDropActiveIconView * _airDropInactiveIconView;
    NSArray * _airdropViewYConstraints;
    SFAirDropDiscoveryController * _discoveryController;
    UIVisualEffectView * _iconsVibrancyView;
    UILabel * _instructionsLabel;
    NSLayoutConstraint * _instructionsRightConstraint;
    UIVisualEffectView * _instructionsVibrancyView;
    NSArray * _labelYConstraints;
    NSArray * _largeTextAirdropViewYConstraints;
    NSArray * _largeTextLabelYConstraints;
    struct __SFOperation { } * _logger;
    UILabel * _noAWDLLabel;
    NSLayoutConstraint * _noAWDLRightConstraint;
    UILabel * _noWifiLabel;
    NSLayoutConstraint * _noWifiRightConstraint;
    NSString * _overriddenInstructionsText;
    NSString * _overriddenNoAWDLText;
    NSString * _overriddenNoWiFIBTText;
    NSString * _overriddenTitleText;
    UIButton * _reportBugButton;
    NSString * _sessionID;
    UILabel * _titleLabel;
    UIVisualEffectView * _titleVibrancyView;
    SFWirelessSettingsController * _wirelessSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *overriddenInstructionsText;
@property (nonatomic, copy) NSString *overriddenNoAWDLText;
@property (nonatomic, copy) NSString *overriddenNoWiFIBTText;
@property (nonatomic, copy) NSString *overriddenTitleText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createtvOSLayoutConstraints;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)enableAirDropRequiredFeatures;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)instructionsText;
- (void)invalidate;
- (bool)isBluetoothEnabled;
- (bool)isTetheredModeEnabled;
- (bool)isWifiEnabled;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (id)overriddenInstructionsText;
- (id)overriddenNoAWDLText;
- (id)overriddenNoWiFIBTText;
- (id)overriddenTitleText;
- (void)setOverriddenInstructionsText:(id)arg1;
- (void)setOverriddenNoAWDLText:(id)arg1;
- (void)setOverriddenNoWiFIBTText:(id)arg1;
- (void)setOverriddenTitleText:(id)arg1;
- (void)startAdvertising;
- (void)stopAdvertising;
- (id)titleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateContentAreaAnimated:(bool)arg1;
- (void)updateFontSizes;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)willEnterForeground:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;

@end
