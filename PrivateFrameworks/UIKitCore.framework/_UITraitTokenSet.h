/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITraitTokenSet : NSObject <NSCopying, NSFastEnumeration> {
    NSArray * _cachedArrayRepresentation;
    struct { 
        _UIMutableFastIndexSet *set; 
        struct _UIBitSet<256UL> { 
            unsigned long long _chunks[4]; 
        } bitSet; 
    }  _storage;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
