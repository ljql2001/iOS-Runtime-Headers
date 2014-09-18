/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableArray *_attachmentsOrder;
    int _pendingImageScalingOperations;
    NSObject<OS_dispatch_queue> *_scalingQueue;
    MFConditionLock *_scalingThrottle;
    unsigned int _size;
    bool_didCancelImageScalingOperations;
    bool_isScalingEnabled;
    bool_isScalingThrottled;
    bool_outgoing;
}

@property(readonly) NSArray * attachments;
@property bool scalingThrottled;

+ (void)addAttachmentUniqueIdentifierStore:(id)arg1;
+ (void)beginPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (bool)isPreventingInlinePDFs;

- (void)_decrementPendingImageScalingOperations;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned long long)arg3;
- (void)_inrementPendingImageScalingOperations;
- (void)_notifyAttachmentCachedSizesChanged;
- (bool)addAttachment:(id)arg1 allowingOverride:(id)arg2;
- (bool)addAttachment:(id)arg1;
- (id)attachments;
- (void)cancelImageScalingOperations;
- (void)dealloc;
- (id)description;
- (bool)didCancelImageScalingOperations;
- (bool)hasPendingImageScalingOperations;
- (id)initOutgoing;
- (void)removeAttachmentForURL:(id)arg1;
- (void)removeAttachmentsForURLs:(id)arg1;
- (bool)scalingThrottled;
- (bool)setAttachment:(id)arg1 forURL:(id)arg2;
- (void)setScalingThrottled:(bool)arg1;
- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2;

@end