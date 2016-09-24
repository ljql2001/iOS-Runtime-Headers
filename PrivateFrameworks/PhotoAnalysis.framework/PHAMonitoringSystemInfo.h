/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAMonitoringSystemInfo : NSObject <NSSecureCoding> {
    unsigned int  _diskBytesReadPerInterval;
    unsigned int  _diskBytesWritePerInterval;
}

@property unsigned int diskBytesReadPerInterval;
@property unsigned int diskBytesWritePerInterval;

+ (BOOL)supportsSecureCoding;

- (unsigned int)diskBytesReadPerInterval;
- (unsigned int)diskBytesWritePerInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDiskBytesReadPerInterval:(unsigned int)arg1;
- (void)setDiskBytesWritePerInterval:(unsigned int)arg1;

@end