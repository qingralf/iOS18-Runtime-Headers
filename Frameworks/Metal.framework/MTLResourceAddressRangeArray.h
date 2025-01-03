/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceAddressRangeArray : NSObject {
    unsigned long long  _count;
    struct MTLAddressRange { unsigned long long x1; unsigned long long x2; } * _ranges;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct MTLAddressRange { unsigned long long x1; unsigned long long x2; }*ranges;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithRanges:(struct MTLAddressRange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (struct MTLAddressRange { unsigned long long x1; unsigned long long x2; }*)ranges;

@end
