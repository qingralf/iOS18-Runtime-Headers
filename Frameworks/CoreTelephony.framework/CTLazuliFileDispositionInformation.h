/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliFileDispositionInformation : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _dataUrl;
    long long  _disposition;
    NSNumber * _fileSizeInBytes;
    NSString * _originalFileName;
    NSNumber * _playingLengthInSeconds;
    NSString * _untrustedContentType;
    NSString * _validUntil;
}

@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSURL *dataUrl;
@property (nonatomic) long long disposition;
@property (nonatomic, retain) NSNumber *fileSizeInBytes;
@property (nonatomic, retain) NSString *originalFileName;
@property (nonatomic, retain) NSNumber *playingLengthInSeconds;
@property (nonatomic, retain) NSString *untrustedContentType;
@property (nonatomic, retain) NSString *validUntil;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUrl;
- (id)description;
- (long long)disposition;
- (void)encodeWithCoder:(id)arg1;
- (id)fileSizeInBytes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliFileDispositionInformation:(id)arg1;
- (id)originalFileName;
- (id)playingLengthInSeconds;
- (void)setContentType:(id)arg1;
- (void)setDataUrl:(id)arg1;
- (void)setDisposition:(long long)arg1;
- (void)setFileSizeInBytes:(id)arg1;
- (void)setOriginalFileName:(id)arg1;
- (void)setPlayingLengthInSeconds:(id)arg1;
- (void)setUntrustedContentType:(id)arg1;
- (void)setValidUntil:(id)arg1;
- (id)untrustedContentType;
- (id)validUntil;

@end