/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
}

@property(readonly) NSString *UTI;
@property(readonly) NSString *figFormatReaderFileFormat;
@property(readonly) NSUInteger audioFileTypeID;

+ (void)initialize;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;

- (id)UTI;
- (unsigned long)audioFileTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)figFormatReaderFileFormat;
- (id)initWithFileTypeIdentifier:(id)arg1;

@end