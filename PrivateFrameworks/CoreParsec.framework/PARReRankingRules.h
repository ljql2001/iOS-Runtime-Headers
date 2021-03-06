/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARReRankingRules : NSObject {
    NSArray * _domainsToRerank;
    unsigned long long  _movementRange;
}

@property (nonatomic, retain) NSArray *domainsToRerank;
@property (nonatomic) unsigned long long movementRange;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (void).cxx_destruct;
- (id)domainsToRerank;
- (unsigned long long)movementRange;
- (void)setDomainsToRerank:(id)arg1;
- (void)setMovementRange:(unsigned long long)arg1;

@end
