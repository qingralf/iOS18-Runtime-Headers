/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalytics.StagingReport : NSObject <NSSecureCoding> {
    void addedCount;
    void missingTimestampCount;
    void result;
}

@property (nonatomic) int addedCount;
@property (nonatomic) int missingTimestampCount;
@property (nonatomic) int result;

+ (id)failed;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)terminated;
+ (id)timedOut;

- (void)added;
- (int)addedCount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(int)arg1;
- (void)missingTimestamp;
- (int)missingTimestampCount;
- (int)result;
- (void)setAddedCount:(int)arg1;
- (void)setMissingTimestampCount:(int)arg1;
- (void)setResult:(int)arg1;

@end
