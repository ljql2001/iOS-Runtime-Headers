/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIWordTokenizer : NSObject {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            long long location; 
            long long length; 
        } rangeToBuffer; 
        long long bufferedRangeStart; 
        long long bufferedRangeEnd; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    unsigned long long m_bufferOffset;
    } m_inlineBuffer;
    } m_searchRange;
    NSString *m_string;
    } m_tokenRange;
}

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })advanceToNextToken;
- (id)allTokensForString:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCurrentToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end