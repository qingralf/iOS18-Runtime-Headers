/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTStewieSatSmsSummaryMessage : NSObject <CTStewieMessageIncoming> {
    long long  _pendingSatSmsTotalCount;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pendingSatSmsTotalCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPendingSatSmsTotalCount:(long long)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOther:(id)arg1;
- (long long)pendingSatSmsTotalCount;
- (void)setPendingSatSmsTotalCount:(long long)arg1;

@end
