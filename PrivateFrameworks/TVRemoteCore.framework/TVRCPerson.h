/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCPerson : NSObject <NSCopying> {
    NSString * _bio;
    NSDate * _birthDate;
    NSString * _birthplace;
    NSDate * _deathDate;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSString * _imageURLTemplate;
    NSString * _name;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *bio;
@property (nonatomic, readonly) NSDate *birthDate;
@property (nonatomic, readonly) NSString *birthplace;
@property (nonatomic, readonly) NSDate *deathDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) NSString *imageURLTemplate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

+ (id)personWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_dateFromNumber:(id)arg1;
- (id)_formattedDateWithDate:(id)arg1;
- (id)_urlFromString:(id)arg1;
- (id)bio;
- (id)birthDate;
- (id)birthplace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deathDate;
- (id)formattedAge;
- (id)formattedBirthDate;
- (id)formattedDeathDate;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageURLTemplate;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (id)url;

@end
