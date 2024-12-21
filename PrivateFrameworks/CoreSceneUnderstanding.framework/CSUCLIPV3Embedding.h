/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface CSUCLIPV3Embedding : NSObject {
    <CSUBuffer> * _buffer;
    long long  _revision;
    long long  _type;
}

@property (readonly) <CSUBuffer> *buffer;
@property (readonly) long long revision;
@property (readonly) long long type;

+ (id)embeddingWithBuffer:(id)arg1 type:(long long)arg2 revision:(long long)arg3;

- (void).cxx_destruct;
- (id)buffer;
- (id)initWithBuffer:(id)arg1 type:(long long)arg2 revision:(long long)arg3;
- (bool)isCompatibleWith:(id)arg1;
- (long long)revision;
- (long long)type;

@end