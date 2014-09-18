/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDMarker, NSString;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
    boolmSmooth;
    CHDMarker *mMarker;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)initWithChart:(id)arg1;
- (bool)isSmooth;
- (id)marker;
- (void)setMarker:(id)arg1;
- (void)setSmooth:(bool)arg1;

@end