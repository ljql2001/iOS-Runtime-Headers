/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUJoinConversationRequest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _groupUUID;
    TUHandle * _localParticipantHandle;
    NSSet * _remoteParticipantHandles;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, readonly, copy) TUHandle *localParticipantHandle;
@property (nonatomic, readonly, copy) NSSet *remoteParticipantHandles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;
- (id)localParticipantHandle;
- (id)remoteParticipantHandles;
- (void)setUUID:(id)arg1;

@end
