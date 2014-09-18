/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : EKEventPredicate <NSSecureCoding> {
    NSString *_externalIdentifier;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1;

@end