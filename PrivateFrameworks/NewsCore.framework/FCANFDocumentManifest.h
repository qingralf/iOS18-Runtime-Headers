/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCANFDocumentManifest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _nonImageResourceIDs;
    NSArray * _optimalImageResourceIDs;
    NSArray * _smallestImageResourceIDs;
}

@property (nonatomic, readonly, copy) NSArray *nonImageResourceIDs;
@property (nonatomic, readonly, copy) NSArray *optimalImageResourceIDs;
@property (nonatomic, readonly, copy) NSArray *smallestImageResourceIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNonImageResourceIDs:(id)arg1 optimalImageResourceIDs:(id)arg2 smallestImageResourceIDs:(id)arg3;
- (id)nonImageResourceIDs;
- (id)optimalImageResourceIDs;
- (id)smallestImageResourceIDs;

@end
