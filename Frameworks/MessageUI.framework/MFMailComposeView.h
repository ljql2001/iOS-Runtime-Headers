/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFComposeRecipientTextViewDelegate>, <MFMailComposeToFieldDelegate>, <MFMailComposeViewDelegate>, <MFMailPopoverManagerDelegate>, MFComposeBodyField, MFComposeFromView, MFComposeImageSizeView, MFComposeMultiView, MFComposeScrollView, MFComposeSubjectView, MFComposeTextContentView, MFFromAddressViewController, MFMailComposeContactsSearchController, MFMailComposeRecipientView, MFSearchResultsViewController, NSArray, NSInvocation, NSString, UIPickerView, UIResponder, UITableView, UIView;

@interface MFMailComposeView : UITransitionView <MFComposeHeaderViewDelegate, UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {
    struct CGSize { 
        double width; 
        double height; 
    unsigned int _isChangingRecipients : 1;
    unsigned int _isLoading : 1;
    unsigned int _isShowingPeoplePicker : 1;
    unsigned int _isRotating : 1;
    unsigned int _isClosing : 1;
    unsigned int _isShowingFromAddressPickerWheel : 1;
    unsigned int _isForEditing : 1;
    unsigned int _isAnimationDisabled : 1;
    unsigned int _shouldShowOptionalHeaders : 1;
    unsigned int _isDraggingRecipients : 1;
    unsigned int _hasAppeared : 1;
    MFMailComposeRecipientView *_activeRecipientView;
    MFMailComposeRecipientView *_bccField;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFMailComposeRecipientView *_ccField;
    <MFComposeRecipientTextViewDelegate> *_composeRecipientViewDelegate;
    UIView *_contentView;
    } _currentContentSize;
    NSInvocation *_delayedPopoverInvocation;
    UIResponder *_firstResponderBeforeSheet;
    UIView *_fromAddressPickerBackgroundView;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    MFComposeFromView *_fromField;
    UIView *_headerView;
    MFComposeImageSizeView *_imageSizeField;
    double _keyboardIntersection;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    MFComposeMultiView *_multiField;
    unsigned long long _notifyingBodyField;
    double _offsetBeforeSearch;
    unsigned long long _options;
    UIResponder *_pinningResponder;
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    MFMailComposeContactsSearchController *_searchController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    MFSearchResultsViewController *_searchViewController;
    UIView *_shadowView;
    MFComposeSubjectView *_subjectField;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property(getter=isAnimationDisabled) bool animationDisabled;
@property(readonly) MFMailComposeRecipientView * bccField;
@property(readonly) MFComposeBodyField * bodyField;
@property(readonly) MFComposeScrollView * bodyScroller;
@property(readonly) MFComposeTextContentView * bodyTextView;
@property(readonly) MFMailComposeRecipientView * ccField;
@property(getter=isChangingRecipients) bool changingRecipients;
@property <MFComposeRecipientTextViewDelegate> * composeRecipientDelegate;
@property <MFMailComposeViewDelegate> * composeViewDelegate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) MFComposeFromView * fromField;
@property(readonly) unsigned long long hash;
@property(readonly) MFComposeImageSizeView * imageSizeField;
@property bool isForEditing;
@property(getter=isLoading) bool loading;
@property(readonly) MFComposeMultiView * multiField;
@property <MFMailPopoverManagerDelegate> * popoverOwner;
@property(readonly) MFSearchResultsViewController * searchViewController;
@property(getter=isSearching,readonly) bool searching;
@property(getter=isShowingPeoplePicker) bool showingPeoplePicker;
@property(readonly) MFComposeSubjectView * subjectField;
@property(readonly) Class superclass;
@property(readonly) MFMailComposeRecipientView * toField;
@property <MFMailComposeToFieldDelegate> * toFieldDelegate;

- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (id)_focusedRecipientView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFromAddressPicker;
- (double)_heightForBottomView;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withPinFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 searchResultsWereDismissed:(bool)arg4;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_layoutSubviews:(bool)arg1;
- (void)_layoutSubviewsWithActiveRecipientView:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_multiFieldClicked;
- (void)_presentDelayedPopover;
- (id)_searchResultsTable;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 wasSearching:(bool)arg5;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateOptionalHeaderVisibilityForceVisible:(bool)arg1;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (id)ccField;
- (bool)chooseSelectedSearchResult;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(bool)arg2 clear:(bool)arg3;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(bool)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientDelegate;
- (id)composeViewDelegate;
- (void)dealloc;
- (void)didAppear;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissSearchResults;
- (void)dragBeganInWindow:(id)arg1;
- (void)dragEnded;
- (id)dragScrollView;
- (id)dragWindow;
- (bool)endEditing:(bool)arg1;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (bool)isAnimationDisabled;
- (bool)isChangingRecipients;
- (bool)isForEditing;
- (bool)isFromAddressPickerVisible;
- (bool)isKeyboardVisible;
- (bool)isLoading;
- (bool)isSearchResultsPopoverVisible;
- (bool)isSearching;
- (bool)isShowingPeoplePicker;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (void)menuDidHide;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)popoverOwner;
- (bool)presentSearchResults:(id)arg1;
- (bool)presentSearchResults;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (id)searchViewController;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)setAnimationDisabled:(bool)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setChangingRecipients:(bool)arg1;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setFromAddressPickerVisible:(bool)arg1 animated:(bool)arg2;
- (void)setFromAddressPickerVisible:(bool)arg1;
- (void)setIsForEditing:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1 animate:(bool)arg2;
- (void)setLoading:(bool)arg1;
- (void)setPopoverOwner:(id)arg1;
- (void)setRecipientFieldsEditable:(bool)arg1 animated:(bool)arg2;
- (void)setScrollsToTop:(bool)arg1;
- (void)setShowingPeoplePicker:(bool)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (id)subjectField;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)toField;
- (id)toFieldDelegate;
- (void)toggleImageSizeFieldIfNecessary;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end