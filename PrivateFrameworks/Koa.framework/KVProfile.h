/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Koa.framework/Koa
 */

@interface KVProfile : NSObject <NSSecureCoding> {
    NSObject<KVProfileReader> * _profileReader;
}

+ (id)emptyProfile:(id*)arg1;
+ (void)initalize;
+ (id)profileWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_enumerateSerializedSetsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enumerateDatasetsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileData:(id)arg1 error:(id*)arg2;
- (id)initWithProfileData:(id)arg1 provider:(id)arg2 error:(id*)arg3;
- (id)profileInfo;
- (id)serializedSets:(id*)arg1;
- (id)toSerializedSets:(id*)arg1;

@end