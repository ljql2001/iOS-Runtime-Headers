/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {
    NSXPCConnection * _connection;
    NSData * _cookieData;
    NSString * _lastSessionId;
    struct dispatch_queue_s { } * _queue;
    NSMutableArray * _subscriptionCompletions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)calculateInstallConsentTextTypeFor:(id)arg1;
+ (id)sharedManager;

- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(bool)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6;
- (void)_reconnect;
- (void)_remotePlansWithCsn:(id)arg1 parameters:(id)arg2 remoteCompletion:(id /* block */)arg3;
- (void)addNewRemotePlan:(bool)arg1 completion:(id /* block */)arg2;
- (void)addNewRemotePlan:(bool)arg1 userConsent:(long long)arg2 completion:(id /* block */)arg3;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(bool)arg5 completion:(id /* block */)arg6;
- (void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(bool)arg5 userConsent:(long long)arg6 completion:(id /* block */)arg7;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(bool)arg3 completion:(id /* block */)arg4;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(bool)arg3 userConsent:(long long)arg4 completion:(id /* block */)arg5;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(bool)arg2 completion:(id /* block */)arg3;
- (void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(bool)arg2 userConsent:(long long)arg3 completion:(id /* block */)arg4;
- (void)carrierHandoffToken:(id /* block */)arg1;
- (void)connectionSettings:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAllRemoteProfiles;
- (void)deleteRemoteProfile:(id)arg1;
- (void)didCancelRemotePlan;
- (void)didDeleteRemotePlanItem:(id)arg1 completion:(id /* block */)arg2;
- (void)didProvisionEsimWithIccid:(id)arg1;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(bool)arg2;
- (void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(id /* block */)arg6;
- (void)didSelectPlanItem:(id)arg1 completion:(id /* block */)arg2;
- (void)didSelectRemotePlanItem:(id)arg1 completion:(id /* block */)arg2;
- (void)eraseAllRemotePlansWithCompletion:(id /* block */)arg1;
- (void)expirePlan;
- (void)fetchRemoteProfiles:(id)arg1;
- (void)finishRemoteProvisioningWithCompletion:(id /* block */)arg1;
- (void)getAutoPlanSelectionWithCompletion:(id /* block */)arg1;
- (void)getCurrentPlanType:(id /* block */)arg1;
- (void)getDeviceInfo:(id /* block */)arg1;
- (void)getESimServerURL:(id /* block */)arg1;
- (void)getIMEIPrefix:(id /* block */)arg1;
- (void)getRemoteInfo:(id /* block */)arg1;
- (void)getRoamingSignupOverrideWithCompletion:(id /* block */)arg1;
- (void)getSelectedEnv:(id /* block */)arg1;
- (void)getSelectedProxy:(id /* block */)arg1;
- (id)init;
- (void)isAddButtonEnabled:(id /* block */)arg1;
- (void)isMultipleDataPlanSupportAvailable:(id /* block */)arg1;
- (void)isNewDataPlanCapable:(id /* block */)arg1;
- (void)isRemotePlanCapable:(id /* block */)arg1;
- (void)isRoamingPlanSupportAvailable:(id /* block */)arg1;
- (void)latitudeLongitudeOverride:(id /* block */)arg1;
- (void)launchDataActivationNextWithUrl:(id)arg1;
- (void)launchSequoia;
- (void)manageAccountForPlan:(id)arg1 completion:(id /* block */)arg2;
- (void)manageAccountForRemotePlan:(id)arg1 completion:(id /* block */)arg2;
- (void)mccMncOverride:(id /* block */)arg1;
- (void)openInternalUrlId:(long long)arg1;
- (void)pendingReleaseRemotePlan;
- (void)ping;
- (void)planInfoDidUpdate;
- (void)planItemsWithCompletion:(id /* block */)arg1;
- (void)plansForRenewalWithCompletion:(id /* block */)arg1;
- (void)plansForRenewalWithProgress:(id /* block */)arg1 andCompletion:(id /* block */)arg2;
- (void)plansWithCompletion:(id /* block */)arg1;
- (void)plansWithCompletion:(id /* block */)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithProgress:(id /* block */)arg1 andCompletion:(id /* block */)arg2;
- (void)plansWithProgress:(id /* block */)arg1 andCompletion:(id /* block */)arg2 additionalParameters:(id)arg3;
- (void)remotePlanItemsWithCompletion:(id /* block */)arg1;
- (void)remotePlanItemsWithUpdateFetch:(bool)arg1 completion:(id /* block */)arg2;
- (void)remotePlanLaunchInfoForCsn:(id)arg1 completion:(id /* block */)arg2;
- (void)remotePlanLaunchInfoForEid:(id)arg1 completion:(id /* block */)arg2;
- (void)remotePlanSubscriptionStatusWithCompletion:(id /* block */)arg1;
- (void)remotePlansSignupParamsForCsn:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)remoteplansWithCsn:(id)arg1 parameters:(id)arg2 andRemoteCompletion:(id /* block */)arg3;
- (void)selectRemoteProfile:(id)arg1;
- (void)setActivePlan:(id)arg1 completion:(id /* block */)arg2;
- (void)setAutoPlanSelection:(bool)arg1;
- (void)setESimServerURL:(id)arg1;
- (void)setIMEIPrefix:(id)arg1;
- (void)setLatitude:(id)arg1 andLongitude:(id)arg2;
- (void)setMcc:(long long)arg1 andMnc:(long long)arg2;
- (void)setRoamingSignupOverride:(bool)arg1;
- (void)setSelectedEnv:(long long)arg1;
- (void)setSelectedProxy:(long long)arg1;
- (void)setUserInPurchaseFlow:(bool)arg1;
- (void)shouldShowAddNewRemotePlan:(id /* block */)arg1;
- (void)shouldShowAddNewRemotePlanWithFlowType:(id /* block */)arg1;
- (void)shouldShowAddNewRemotePlanWithFlowTypeAndTrialPlanType:(id /* block */)arg1;
- (void)shouldShowPlanList:(id /* block */)arg1;
- (void)startRemoteProvisioningWithCompletion:(id /* block */)arg1;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)subscriptionDetailsWithCompletion:(id /* block */)arg1;
- (void)triggerAddNewDataPlan:(id /* block */)arg1;
- (void)updatePlansDatabase;
- (void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 completion:(id /* block */)arg3;
- (void)willDisplayPlanItems;

@end
