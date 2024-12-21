/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXKeyedUnarchiver : NSKeyedUnarchiver {
    NSArray * _allTargetsFromAnimCodec;
    NSDictionary * _context;
    NSURL * _documentURL;
    id  _lookUpFoundInstance;
    NSString * _lookUpKey;
}

@property (nonatomic, retain) NSArray *allTargetsFromAnimCodec;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, readonly) NSURL *documentEnclosingURL;
@property (nonatomic, retain) NSURL *documentURL;
@property (nonatomic, retain) id lookUpFoundInstance;
@property (nonatomic, retain) NSString *lookUpKey;

- (id)allTargetsFromAnimCodec;
- (id)context;
- (void)dealloc;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)documentEnclosingURL;
- (id)documentURL;
- (id)initForReadingWithData:(id)arg1 secure:(bool)arg2;
- (id)lookUpFoundInstance;
- (id)lookUpKey;
- (void)setAllTargetsFromAnimCodec:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setLookUpFoundInstance:(id)arg1;
- (void)setLookUpKey:(id)arg1;

@end