/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoControlsVisibilityManager : NSObject <SXVideoTransitionObserver> {
    NSMapTable * _actions;
    bool  _autoHidingEnabled;
    NSTimer * _autohideTimer;
    NSMutableSet * _items;
    <SXVideoLoadingStateObserving> * _loadingStateObserver;
    <SXVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SXVideoPlaybackStateObserving> * _playbackStateObserver;
    <SXVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
    <SXVideoQueueProviding> * _queueProvider;
    SXTimeline * _timeline;
    <SXVideoControlTimingProviding> * _timingProvider;
}

@property (nonatomic, readonly) NSMapTable *actions;
@property (nonatomic) bool autoHidingEnabled;
@property (nonatomic, retain) NSTimer *autohideTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, retain) <SXVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SXVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, retain) <SXVideoPlaybackStateObserving> *playbackStateObserver;
@property (nonatomic, readonly) <SXVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (nonatomic, readonly) <SXVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTimeline *timeline;
@property (nonatomic, readonly) <SXVideoControlTimingProviding> *timingProvider;

- (void).cxx_destruct;
- (id)actions;
- (void)addItem:(id)arg1;
- (bool)autoHidingEnabled;
- (id)autohideTimer;
- (void)cancelAutohideTimer;
- (void)ensureHideableItemsAreHidden;
- (void)ensureItemsAreHidden:(id)arg1 animated:(bool)arg2;
- (void)ensureItemsAreVisible:(id)arg1 animated:(bool)arg2;
- (void)hideItems:(id)arg1 animated:(bool)arg2;
- (id)initWithTimeline:(id)arg1 queueProvider:(id)arg2 timingProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 playbackStateObserverFactory:(id)arg5;
- (id)items;
- (id)itemsPassingTest:(id /* block */)arg1;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (id)playbackStateObserver;
- (id)playbackStateObserverFactory;
- (id)queueProvider;
- (void)removeItem:(id)arg1;
- (void)scheduleAutoAppearanceForItem:(id)arg1 withTimeInterval:(double)arg2;
- (void)scheduleAutohideTimer;
- (void)setAutoHidingEnabled:(bool)arg1;
- (void)setAutohideTimer:(id)arg1;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setPlaybackStateObserver:(id)arg1;
- (void)showItems:(id)arg1 animated:(bool)arg2;
- (id)timeline;
- (id)timingProvider;
- (void)toggleVisibility;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
