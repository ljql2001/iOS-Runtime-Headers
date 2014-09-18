/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolcameraSwitching;
    int camera;
    } contentsRect;
    int orientation;
    } ratio;
}

@property int camera;
@property bool cameraSwitching;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property int orientation;
@property struct CGSize { double x1; double x2; } ratio;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (int)camera;
- (bool)cameraSwitching;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (id)encodeToNewNSDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (bool)isEqualToVideoAttributes:(id)arg1;
- (int)orientation;
- (struct CGSize { double x1; double x2; })ratio;
- (void)setCamera:(int)arg1;
- (void)setCameraSwitching:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)setRatio:(struct CGSize { double x1; double x2; })arg1;

@end