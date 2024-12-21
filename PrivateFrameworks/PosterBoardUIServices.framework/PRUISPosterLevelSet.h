/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices
 */

@interface PRUISPosterLevelSet : NSObject <NSCopying, NSSecureCoding> {
    PUIPosterLevelSet * _underlyingLevelSet;
}

@property (nonatomic, readonly, copy) NSSet *levels;
@property (nonatomic, readonly) unsigned long long numberOfLevels;

+ (id)PRUISPosterLevelSetForPUIPosterLevelSet:(id)arg1;
+ (id)allLevelsExceptFloating;
+ (id)compositeLevelSet;
+ (id)defaultLevelSet;
+ (id)levelSetForLevel:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsLevel:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateLevels:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevel:(long long)arg1;
- (id)initWithLevels:(id)arg1;
- (id)initWithNumberOfLevels:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLevelSet:(id)arg1;
- (id)levels;
- (unsigned long long)numberOfLevels;
- (id)sortedLevels;

@end