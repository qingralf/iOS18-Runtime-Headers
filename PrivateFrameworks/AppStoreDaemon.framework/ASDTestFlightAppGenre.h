/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDTestFlightAppGenre : NSObject <NSCopying, NSSecureCoding> {
    NSString * _genre;
    NSNumber * _genreID;
}

@property (readonly) NSString *genre;
@property (readonly) NSNumber *genreID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)genreID;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenre:(id)arg1 genreID:(id)arg2;

@end
