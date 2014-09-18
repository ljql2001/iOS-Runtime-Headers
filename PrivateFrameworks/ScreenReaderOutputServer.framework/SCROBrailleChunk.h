/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _brailleSelection;
    NSMutableAttributedString *_brailleString;
    int _contractionMode;
    NSString *_language;
    NSString *_overrideText;
    NSString *_text;
    } _textSelection;
    long long _token;
    bool_hasTextSelection;
    bool_isFocused;
    bool_isTechnical;
    bool_showDotsSevenAndEight;
    bool_showEightDot;
}

@property(readonly) NSString * language;

+ (void)initialize;

- (id)_tableIdentifierForLanguage:(id)arg1;
- (void)_translateAsLiteraryTextWithPrimaryTable:(bool)arg1;
- (void)_translateAsTechnicalTextWithPrimaryTable:(bool)arg1;
- (id)brailleWithIBeamLocation:(long long*)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)focused;
- (bool)hasSelection;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focused:(bool)arg5 contractionMode:(int)arg6 showEightDot:(bool)arg7 showDotsSevenAndEight:(bool)arg8 technical:(bool)arg9;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focused:(bool)arg5 contractionMode:(int)arg6 showEightDot:(bool)arg7 showDotsSevenAndEight:(bool)arg8;
- (id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focused:(bool)arg6 contractionMode:(int)arg7 showEightDot:(bool)arg8 showDotsSevenAndEight:(bool)arg9 technical:(bool)arg10;
- (bool)isFocusedOrSelected;
- (id)language;
- (long long)locationForIndex:(long long)arg1;
- (long long)token;
- (void)translate;

@end