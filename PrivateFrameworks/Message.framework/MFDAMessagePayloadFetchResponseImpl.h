/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    boolstreaming;
    boolstreamingDone;
    NSData *data;
}

- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 streaming:(bool)arg2 streamingDone:(bool)arg3;
- (bool)streaming;
- (bool)streamingDone;

@end