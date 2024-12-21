/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASFastPass : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _processingTaskIdentifiers;
    long long  _semanticVersion;
}

@property (nonatomic, copy) NSArray *processingTaskIdentifiers;
@property (nonatomic) long long semanticVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)processingTaskIdentifiers;
- (long long)semanticVersion;
- (void)setProcessingTaskIdentifiers:(id)arg1;
- (void)setSemanticVersion:(long long)arg1;

@end