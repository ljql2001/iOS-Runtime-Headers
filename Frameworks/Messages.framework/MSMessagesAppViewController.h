/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessagesAppViewController : UIViewController <MSConversationDelegate, MSMessagePayloadProvider> {
    MSConversation * _activeConversation;
    BOOL  _isReadyForDisplay;
}

@property (nonatomic, retain) MSConversation *activeConversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isReadyForDisplay;
@property (nonatomic, readonly) unsigned int presentationStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)activeConversation;
- (void)dealloc;
- (void)didBecomeActiveWithConversation:(id)arg1;
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didTransitionToPresentationStyle:(unsigned int)arg1;
- (void)dismiss;
- (BOOL)displaysAfterAppearance;
- (BOOL)isReadyForDisplay;
- (unsigned int)presentationStyle;
- (void)requestPresentationStyle:(unsigned int)arg1;
- (void)setActiveConversation:(id)arg1;
- (void)setIsReadyForDisplay:(BOOL)arg1;
- (void)setReadyForDisplay;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)willTransitionToPresentationStyle:(unsigned int)arg1;

@end