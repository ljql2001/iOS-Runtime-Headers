/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject {
    MPMediaQuery *_albumItemsQuery;
    id _responseBlock;
    NSNumber *_storeLookupID;
    unsigned long long _tokenID;
    bool_wantsArtwork;
}

@property(readonly) MPMediaQuery * albumItemsQuery;
@property(copy,readonly) id responseBlock;
@property(readonly) NSNumber * storeLookupID;
@property(readonly) NSString * storeLookupIDString;
@property(readonly) unsigned long long tokenID;
@property(readonly) bool wantsArtwork;

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;

- (void).cxx_destruct;
- (id)_specificationForArtworkSizesToRequest;
- (id)albumItemsQuery;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(bool)arg3 responseBlock:(id)arg4;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
- (id)newLookupRequest;
- (id)responseBlock;
- (id)storeLookupID;
- (id)storeLookupIDString;
- (unsigned long long)tokenID;
- (bool)wantsArtwork;

@end