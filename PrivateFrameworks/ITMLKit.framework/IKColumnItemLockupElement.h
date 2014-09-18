/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKButtonElement, IKImageElement, IKOrdinalElement, IKTextBadgeAttachment, IKTextElement, IKVideoElement, NSArray, NSString;

@interface IKColumnItemLockupElement : IKViewElement {
}

@property(retain,readonly) IKButtonElement * button;
@property(copy,readonly) NSString * columnItemType;
@property(retain,readonly) IKTextElement * descriptionText;
@property(readonly) bool hasSeparator;
@property(readonly) IKImageElement * image;
@property(readonly) NSArray * images;
@property(readonly) bool isWatchlisted;
@property(readonly) bool onlyVisibleOnColumnHighlight;
@property(retain,readonly) IKOrdinalElement * ordinal;
@property(retain,readonly) IKTextElement * secondarySubtitle;
@property(retain,readonly) IKTextElement * subtitle;
@property(readonly) IKTextBadgeAttachment * subtitleBadge;
@property(retain,readonly) NSArray * textElements;
@property(retain,readonly) IKTextElement * title;
@property(readonly) IKTextBadgeAttachment * titleBadge;
@property(retain,readonly) IKVideoElement * video;

- (void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4;
- (id)button;
- (id)columnItemType;
- (id)descriptionText;
- (bool)hasSeparator;
- (id)image;
- (id)images;
- (bool)isWatchlisted;
- (bool)onlyVisibleOnColumnHighlight;
- (id)ordinal;
- (id)secondarySubtitle;
- (id)subtitle;
- (id)subtitleBadge;
- (id)textElements;
- (id)title;
- (id)titleBadge;
- (id)video;

@end