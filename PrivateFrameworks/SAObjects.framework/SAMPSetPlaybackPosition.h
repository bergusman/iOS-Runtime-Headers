/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAMPSetPlaybackPosition : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property int position;

+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setPlaybackPosition;

- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (int)position;
- (void)setPosition:(int)arg1;
- (id)groupIdentifier;

@end