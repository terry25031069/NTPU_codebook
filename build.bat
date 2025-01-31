@echo off

REM Check if codebook.pdf needs to be rebuilt
if exist codebook.pdf (
    for %%i in (codebook.tex content.tex) do (
        if %%~ti GTR %%~tcodebook.pdf (
            goto :build
        )
    )
    echo codebook.pdf is up to date.
    goto :eof
)

:build
REM Build the PDF
xelatex codebook.tex
xelatex codebook.tex

REM Clean up auxiliary files
del codebook.aux codebook.log codebook.toc

goto :eof

:clean
REM Clean the generated PDF
del codebook.pdf

:eof