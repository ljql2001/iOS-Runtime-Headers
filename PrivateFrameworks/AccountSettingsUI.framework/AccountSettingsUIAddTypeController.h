/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray;

@interface AccountSettingsUIAddTypeController : PSListController {
    NSArray *_allowedDataclasses;
    BOOL _dontShowSecondLevelOtherAccountTypes;
    BOOL _forceMailSetup;
    NSArray *_plugins;
}

@property(retain) NSArray *allowedDataclasses;
@property(retain) NSArray *plugins;

- (id)allowedDataclasses;
- (void)dealloc;
- (void)dontShowSecondLevelOtherAccountTypes;
- (void)finishedAccountSetup;
- (void)forceMailSetup;
- (NSInteger)numAddControllersInStack;
- (id)plugins;
- (void)popOutOfAddControllers;
- (void)setAllowedDataclasses:(id)arg1;
- (void)setPlugins:(id)arg1;
- (id)specifierForAccountType:(id)arg1;
- (id)specifiers;
- (void)viewWillBecomeVisible:(void*)arg1;

@end