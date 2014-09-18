/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSString, UILocalNotification;

@interface TimerManager : NSObject {
    UILocalNotification *_notification;
    double _remainingTime;
    int _state;
}

@property double defaultDuration;
@property(readonly) NSString * defaultSound;
@property(readonly) double fireTime;
@property(readonly) double remainingTime;
@property(readonly) int state;

+ (id)copyFetchScheduledNotification;
+ (bool)discardOldVersion;
+ (bool)isTimerNotification:(id)arg1;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (void)setSoundID:(id)arg1 forNotification:(id)arg2;
+ (id)sharedManager;
+ (bool)upgrade;

- (bool)cancel;
- (void)changeSound:(id)arg1;
- (double)defaultDuration;
- (id)defaultSound;
- (double)fireTime;
- (bool)pause;
- (void)reloadState;
- (double)remainingTime;
- (bool)resume;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)setDefaultDuration:(double)arg1;
- (void)setDefaultSound:(id)arg1;
- (int)state;

@end