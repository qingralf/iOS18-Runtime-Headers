/* Generated by RuntimeBrowser
   Image: /usr/lib/swift/libswiftCore.dylib
 */

@interface Swift.__SharedStringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {
    void _breadcrumbs;
    void _countAndFlags;
    void _owner;
    void immortal;
    void start;
}

@property (nonatomic, readonly) unsigned long long fastestEncoding;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) long long length;

- (const char *)UTF8String;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(long long)arg1;
- (id)copyWithZone:(void*)arg1;
- (unsigned long long)fastestEncoding;
- (BOOL)getCString:(char *)arg1 maxLength:(long long)arg2 encoding:(unsigned long long)arg3;
- (void)getCharacters:(unsigned short*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (long long)length;

@end
