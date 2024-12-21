/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SEService.MemoryUsage : NSObject <NSSecureCoding> {
    void cod;
    void cor;
    void pHeap;
    void usedIndices;
}

@property (nonatomic) long long cod;
@property (nonatomic) long long cor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long pHeap;
@property (nonatomic) long long usedIndices;

+ (id)empty;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (long long)cod;
- (long long)cor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPHeap:(long long)arg1 cor:(long long)arg2 cod:(long long)arg3 usedIndices:(long long)arg4;
- (long long)pHeap;
- (void)setCod:(long long)arg1;
- (void)setCor:(long long)arg1;
- (void)setPHeap:(long long)arg1;
- (void)setUsedIndices:(long long)arg1;
- (long long)usedIndices;

@end